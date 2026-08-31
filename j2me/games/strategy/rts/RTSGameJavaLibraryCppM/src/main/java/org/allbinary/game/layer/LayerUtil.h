
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LAYERUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_LAYERUTIL_H

            #include "../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerUtil
            : public Object
         {
        

    private: static const HASHTABLE: string = "Hashtable: ";

    public static string toString(Hashtable<any, any> hashtable, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERUTIL_H
