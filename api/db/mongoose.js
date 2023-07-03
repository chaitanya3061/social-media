const mongoose=require('mongoose');
mongoose.connect('mongodb://localhost:27017/test',{
    useNewUrlParser:true,
    useUnifiedTopology:true
}).then(()=>{
    console.log("connectiron sucess");
}).catch((error)=>{
    console.log("wrong",error)
})
