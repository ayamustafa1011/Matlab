function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["session1task1.c:37c46"]=1;
    this.traceFlag["session1task1.c:44c46"]=1;
    this.traceFlag["session1task1.c:51c46"]=1;
    this.traceFlag["session1task1.c:58c46"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["session1task1.c:37"]=1;
    this.lineTraceFlag["session1task1.c:44"]=1;
    this.lineTraceFlag["session1task1.c:51"]=1;
    this.lineTraceFlag["session1task1.c:58"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
