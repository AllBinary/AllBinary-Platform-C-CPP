
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_STUPIDTIMER_CPP
        #define ORG_ALLBINARY_TIME_STUPIDTIMER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/StupidTimer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/time/TimeDelayHelper.h"


StupidTimer::StupidTimer() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), nullUtil(NullUtil::getInstance()), threadObjectUtil(ThreadObjectUtil::getInstance()) {
        }
        
    auto StupidTimer::visitBool(Visitor* visitorInterface) -> bool{

    bool result = JavaBoxes::unbox<bool>(visitorInterface->visit(this->nullUtil->NULL_OBJECT));;
    

    bool result2 = result;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result2;
    
}


                //@Throws(Exception.constructor)
            
    auto StupidTimer::visit(Visitor* visitorInterface, TimeDelayHelper* timeDelayHelper) -> void{

    bool tookTooLong = false;;
    

    std::string WAITING_FOR = "Waiting for: ";;
    
PreLogUtil::put(JavaString::valueOf((new StringMaker())->append(WAITING_FOR)->append(StringUtil::getInstance()->toString(visitorInterface))), this, this->commonStrings->VISIT);
    

    int32_t index = 0;;
    

        while(this->visitBool(visitorInterface))
        {

                        if(index % 10 == 0)
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf((new StringMaker())->append(WAITING_FOR)->appendint(index)), this, this->commonStrings->VISIT);
    

                                    }
                                
index++;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil->waitObjectFor(this, 1800);
    



                        if(timeDelayHelper->isTimeTNT())
                        
                                    {
                                    tookTooLong= true;
    
break;

                    

                                    }
                                
}


                        if(tookTooLong)
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->VISIT, new Exception(JavaString::valueOf((new StringMaker())->append("Took Too Long: ")->append(StringUtil::getInstance()->toString(visitorInterface)))));
    

                                    }
                                
                        else {
                            PreLogUtil::put(JavaString::valueOf(timeDelayHelper), this, this->commonStrings->VISIT);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto StupidTimer::stopWaiting() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil->notifyObject(this);
    


}




        #endif //ORG_ALLBINARY_TIME_STUPIDTIMER_CPP
