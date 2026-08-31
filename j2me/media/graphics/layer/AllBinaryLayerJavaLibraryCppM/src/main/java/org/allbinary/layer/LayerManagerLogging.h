
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

            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerLoggingBase.h"
#include "AllBinaryLayer.h"
#include "LayerManager.h"

class LayerManagerLogging: public LayerManagerLoggingBase {
        

    private: static const instance: LayerManagerLogging = new LayerManagerLogging();

    public static LayerManagerLogging getInstance();

    private: static removeFailed: bool = false;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const stringBuilder: StringMaker = new StringMaker();

    private: const APPEND: string = "append";

    private: const APPEND_: string = " append: ";

    private: const _AT_: string = " at: ";

    private: const ATTEMPT_REMOVE_: string = " Remove Attempt: ";

    private: const REMOVE_: string = " Remove: ";

    private: const REMOVE: string = "remove";

    private: const DID_NOT_REMOVE: string = " Did not remove: ";

    private: const CLEAR: string = " Clear List";

                //@Throws(Exception.constructor)
            
    public append(AllBinaryLayer layerInterface);

    public appendAt(AllBinaryLayer layerInterface, int32_t index);

    public remove(AllBinaryLayer layerInterface);

    public removeResult(LayerManager layerManager, AllBinaryLayer layerInterface, bool result);

    log(LayerManager layerManager);

    public clear();

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H
