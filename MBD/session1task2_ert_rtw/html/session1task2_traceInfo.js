function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "session1task2"};
	this.sidHashMap["session1task2"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "session1task2:9"};
	this.sidHashMap["session1task2:9"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "session1task2:10"};
	this.sidHashMap["session1task2:10"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Bitwise NAND"] = {sid: "session1task2:8"};
	this.sidHashMap["session1task2:8"] = {rtwname: "<Root>/Bitwise NAND"};
	this.rtwnameHashMap["<Root>/Bitwise NOR"] = {sid: "session1task2:5"};
	this.sidHashMap["session1task2:5"] = {rtwname: "<Root>/Bitwise NOR"};
	this.rtwnameHashMap["<Root>/Bitwise NOT"] = {sid: "session1task2:7"};
	this.sidHashMap["session1task2:7"] = {rtwname: "<Root>/Bitwise NOT"};
	this.rtwnameHashMap["<Root>/Bitwise OR"] = {sid: "session1task2:2"};
	this.sidHashMap["session1task2:2"] = {rtwname: "<Root>/Bitwise OR"};
	this.rtwnameHashMap["<Root>/Bitwise OR1"] = {sid: "session1task2:4"};
	this.sidHashMap["session1task2:4"] = {rtwname: "<Root>/Bitwise OR1"};
	this.rtwnameHashMap["<Root>/Bitwise XOR"] = {sid: "session1task2:6"};
	this.sidHashMap["session1task2:6"] = {rtwname: "<Root>/Bitwise XOR"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "session1task2:11"};
	this.sidHashMap["session1task2:11"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "session1task2:12"};
	this.sidHashMap["session1task2:12"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "session1task2:13"};
	this.sidHashMap["session1task2:13"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "session1task2:14"};
	this.sidHashMap["session1task2:14"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "session1task2:15"};
	this.sidHashMap["session1task2:15"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "session1task2:16"};
	this.sidHashMap["session1task2:16"] = {rtwname: "<Root>/Out6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
