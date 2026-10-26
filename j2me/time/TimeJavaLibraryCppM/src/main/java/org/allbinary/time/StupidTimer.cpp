
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const NullUtil nullUtil = NullUtil::getInstance();

    private: const ThreadObjectUtil threadObjectUtil = ThreadObjectUtil::getInstance();

    private: bool visitBool(Visitor visitorInterface){

    Boolean result = visitorInterface.visit(this->nullUtil.NULL_OBJECT);;
    

    bool result2 = result.valueOf();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result2;
    
}


                //@Throws(Exception.constructor)
            
    public: void visit(Visitor visitorInterface, TimeDelayHelper timeDelayHelper){

    bool tookTooLong = false;;
    

    std::string WAITING_FOR = "Waiting for: ";;
    
PreLogUtil::put(StringMaker().append(WAITING_FOR).append(StringUtil::getInstance().toString(visitorInterface)).toString(), this, this->commonStrings.VISIT);
    

    int32_t index = 0;;
    

        while(this->visitBool(visitorInterface))
        {

                        if(index % 10 == 0)
                        
                                    {
                                    PreLogUtil::put(StringMaker().append(WAITING_FOR).appendint(index).toString(), this, this->commonStrings.VISIT);
    

                                    }
                                
index++;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil.waitObjectFor(this, 1800);
    



                        if(timeDelayHelper.isTimeTNT())
                        
                                    {
                                    tookTooLong= true;
    
break;

                    

                                    }
                                
}


                        if(tookTooLong)
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.VISIT, Exception(StringMaker().append("Took Too Long: ").append(StringUtil::getInstance().toString(visitorInterface)).toString()));
    

                                    }
                                
                        else {
                            PreLogUtil::put(timeDelayHelper.toString(), this, this->commonStrings.VISIT);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void stopWaiting(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil.notifyObject(this);
    


}


};

            

