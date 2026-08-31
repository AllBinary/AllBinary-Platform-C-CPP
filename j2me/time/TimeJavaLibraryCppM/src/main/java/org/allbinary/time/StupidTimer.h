
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_STUPIDTIMER_H
        #define ORG_ALLBINARY_TIME_STUPIDTIMER_H

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

    bool visitBool(Visitor visitorInterface);

                //@Throws(Exception.constructor)
            
    public visit(Visitor visitorInterface, TimeDelayHelper timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public stopWaiting();

};

            


        #endif //ORG_ALLBINARY_TIME_STUPIDTIMER_H
