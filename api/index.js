const express=require("express");
const app=express();
const cors=require("cors")
const multer = require("multer");
const path = require('path');
const dotenv=require("dotenv");
const helmet=require("helmet");
const morgan=require("morgan");
const userroute=require("./routes/users")
const authroute=require("./routes/auth")
const conversationRoute=require("./routes/conversations");
const messageRoute=require("./routes/messages");
const { default: mongoose } = require("mongoose");
const path1=require("path")
const user =require("mongoose");
dotenv.config();
const postroute=require("./routes/posts");
//connection
user.connect("mongodb://localhost:27017/app",()=>{
    console.log("connection sucessful")
    // user.close()
});

app.use("/images",express.static(path1.join(__dirname,"public/images")))
//middleware
app.use(express.json())
app.use(helmet())
app.use(morgan("common"))
app.use(cors());
const storage = multer.diskStorage({
    destination: (req, file, cb) => {
      cb(null, path.join(__dirname, '/public/images'));
    },
    filename: (req, file, cb) => {
      cb(null, req.body.name);
    },
  });
  
const upload=multer({storage: storage });
app.post("/api/upload",upload.single("file"),(req,res)=>{
    try{
        return res.status(200).json("file upload sucessfully");
    }catch(err){
        console.error(err);
    }
});

app.use("/api/users",userroute)
app.use("/api/auth",authroute)
app.use("/api/posts",postroute)
app.use("/api/conversations",conversationRoute)
app.use("/api/messages",messageRoute)

app.listen(8800,()=>{
    console.log("backend server is ready")
})