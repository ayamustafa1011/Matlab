function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial"};
	this.sidHashMap["Factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial:1"};
	this.sidHashMap["Factorial:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Factorial:5"};
	this.sidHashMap["Factorial:5"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/For Iterator Subsystem"] = {sid: "Factorial:1"};
	this.sidHashMap["Factorial:1"] = {rtwname: "<Root>/For Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Factorial:6"};
	this.sidHashMap["Factorial:6"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/Num"] = {sid: "Factorial:2"};
	this.sidHashMap["Factorial:2"] = {rtwname: "<S1>/Num"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "Factorial:3"};
	this.sidHashMap["Factorial:3"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Multiply"] = {sid: "Factorial:7"};
	this.sidHashMap["Factorial:7"] = {rtwname: "<S1>/Multiply"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "Factorial:8"};
	this.sidHashMap["Factorial:8"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Fact"] = {sid: "Factorial:4"};
	this.sidHashMap["Factorial:4"] = {rtwname: "<S1>/Fact"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
