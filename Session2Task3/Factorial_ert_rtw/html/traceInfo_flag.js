function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial.c:42c29"]=1;
    this.traceFlag["Factorial.c:42c65"]=1;
    this.traceFlag["Factorial.c:47c40"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial.c:39"]=1;
    this.lineTraceFlag["Factorial.c:42"]=1;
    this.lineTraceFlag["Factorial.c:47"]=1;
    this.lineTraceFlag["Factorial.c:52"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
