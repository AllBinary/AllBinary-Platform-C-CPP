
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TimeDelayHelper.h"

class StupidTimer
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const nullUtil: NullUtil = NullUtil.getInstance()!;

    private: const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    bool visitBool(Visitor visitorInterface){

    result: Boolean = visitorInterface!.visit(this.nullUtil!.NULL_OBJECT) as Boolean;;
    

    result2: bool = result.valueOf()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result2;
    
}


                //@Throws(Exception.constructor)
            
    public visit(Visitor visitorInterface, TimeDelayHelper timeDelayHelper){

    tookTooLong: bool = false;;
    

    WAITING_FOR: string = "Waiting for: ";;
    
PreLogUtil.put(new StringMaker().append(WAITING_FOR)!.append(StringUtil.getInstance()!.toString(visitorInterface))!.toString(), this, this.commonStrings!.VISIT);
    

    index: int32_t = 0;;
    

        while(this.visitBool(visitorInterface))
        {

                        if(index % 10 == 0)
                        
                                    {
                                    PreLogUtil.put(new StringMaker().append(WAITING_FOR)!.appendint(index)!.toString(), this, this.commonStrings!.VISIT);
    

                                    }
                                
index++;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this.threadObjectUtil!.waitObjectFor(this, 1800);
    



                        if(timeDelayHelper!.isTimeTNT())
                        
                                    {
                                    tookTooLong= true;
    
break;

                    

                                    }
                                
}


                        if(tookTooLong)
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.VISIT, new Exception(new StringMaker().append("Took Too Long: ")!.append(StringUtil.getInstance()!.toString(visitorInterface))!.toString()));
    

                                    }
                                
                        else {
                            PreLogUtil.put(timeDelayHelper!.toString(), this, this.commonStrings!.VISIT);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public stopWaiting(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this.threadObjectUtil!.notifyObject(this);
    


}


};

            

