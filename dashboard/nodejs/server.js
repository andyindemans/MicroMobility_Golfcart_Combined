const express = require('express');
const bodyParser = require('body-parser');
var csv = require("csvtojson");
const cors = require('cors')



const app = express();

app.use(cors())

//get map
app.get('/map', function (req, res) {
	var csvFilePath = "./corda_data.csv"
	csv()
  .fromFile(csvFilePath)
  .then(function(jsonArrayObj){ 
     res.send(jsonArrayObj)
   })
});


app.listen(3000, function () {
	console.log('server gestart op poort 3000');
});
