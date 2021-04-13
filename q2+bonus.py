import psutil
import time

while True:
    cpuperc = psutil.cpu_percent()
    vmem = psutil.virtual_memory()
    ram = psutil.virtual_memory().percent
    availMem = psutil.virtual_memory().available * 100 / psutil.virtual_memory().total
    
    print("cpu percentage:" ,cpuperc)
    print("virtual memory:" ,vmem)
    print("ram percentage used:", ram )
    print("mem available:" , availMem)
    
    time.sleep(600.00)
