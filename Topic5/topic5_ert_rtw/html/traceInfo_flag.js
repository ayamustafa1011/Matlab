function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["topic5.c:33c36"]=1;
    this.traceFlag["topic5.c:34c33"]=1;
    this.traceFlag["topic5.c:37c37"]=1;
    this.traceFlag["topic5.c:41c38"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["topic5.c:33"]=1;
    this.lineTraceFlag["topic5.c:34"]=1;
    this.lineTraceFlag["topic5.c:37"]=1;
    this.lineTraceFlag["topic5.c:38"]=1;
    this.lineTraceFlag["topic5.c:39"]=1;
    this.lineTraceFlag["topic5.c:41"]=1;
    this.lineTraceFlag["topic5.c:47"]=1;
    this.lineTraceFlag["topic5.c:50"]=1;
    this.lineTraceFlag["topic5.c:73"]=1;
    this.lineTraceFlag["topic5.c:74"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
