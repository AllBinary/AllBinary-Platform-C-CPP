
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerLoggingBase.h"

class LayerManagerNoDebug: public LayerManagerLoggingBase {

    private: static LayerManagerNoDebug instance() { return LayerManagerNoDebug(); }

    public: static LayerManagerNoDebug getInstance();

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H
