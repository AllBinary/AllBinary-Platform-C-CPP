
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot 
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerManager.h"

class LayerManagerLogging: public LayerManagerLoggingBase {

    private: static LayerManagerLogging* instance() { static std::unique_ptr<LayerManagerLogging> value(new LayerManagerLogging()); return value.get(); }

    public: static LayerManagerLogging* getInstance();

    private: static inline bool removeFailed = false;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringMaker* stringBuilder = new StringMaker();

    private: const std::string APPEND = "append";

    private: const std::string APPEND_ = " append: ";

    private: const std::string _AT_ = " at: ";

    private: const std::string ATTEMPT_REMOVE_ = " Remove Attempt: ";

    private: const std::string REMOVE_ = " Remove: ";

    private: const std::string REMOVE = "remove";

    private: const std::string DID_NOT_REMOVE = " Did not remove: ";

    private: const std::string CLEAR = " Clear List";

                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface);

    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index);

    public: void remove(AllBinaryLayer* layerInterface);

    public: void removeResult(LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result);

    private: void log(LayerManager* layerManager);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H
