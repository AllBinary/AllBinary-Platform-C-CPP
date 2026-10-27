
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_STUPIDTIMER_H
        #define ORG_ALLBINARY_TIME_STUPIDTIMER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/time/TimeDelayHelper.h"

class StupidTimer
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: NullUtil* nullUtil = NullUtil::getInstance();

    private: ThreadObjectUtil* threadObjectUtil = ThreadObjectUtil::getInstance();

    private: bool visitBool(Visitor* visitorInterface);

                //@Throws(Exception.constructor)
            
    public: void visit(Visitor* visitorInterface, TimeDelayHelper* timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public: void stopWaiting();

};

            


        #endif //ORG_ALLBINARY_TIME_STUPIDTIMER_H
