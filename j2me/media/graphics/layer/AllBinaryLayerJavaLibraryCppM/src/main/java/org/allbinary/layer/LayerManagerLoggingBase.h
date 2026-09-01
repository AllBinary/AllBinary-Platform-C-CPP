
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryLayer.h"
#include "LayerManager.h"

class LayerManagerLoggingBase
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer layerInterface);

    public: void appendAt(AllBinaryLayer layerInterface, int32_t index);

    public: void remove(AllBinaryLayer layerInterface);

    public: void removeResult(LayerManager layerManager, AllBinaryLayer layerInterface, bool result);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H
