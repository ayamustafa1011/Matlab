function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["session1task2.c:38c56"]=1;
    this.traceFlag["session1task2.c:46c56"]=1;
    this.traceFlag["session1task2.c:52c35"]=1;
    this.traceFlag["session1task2.c:59c56"]=1;
    this.traceFlag["session1task2.c:64c35"]=1;
    this.traceFlag["session1task2.c:69c35"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["session1task2.c:38"]=1;
    this.lineTraceFlag["session1task2.c:46"]=1;
    this.lineTraceFlag["session1task2.c:52"]=1;
    this.lineTraceFlag["session1task2.c:59"]=1;
    this.lineTraceFlag["session1task2.c:64"]=1;
    this.lineTraceFlag["session1task2.c:69"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
