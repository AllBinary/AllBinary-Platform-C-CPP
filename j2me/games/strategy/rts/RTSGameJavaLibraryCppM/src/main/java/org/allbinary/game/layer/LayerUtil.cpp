
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LAYERUTIL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_LAYERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/LayerUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LayerUtil::LayerUtil() {
        }
        
    auto LayerUtil::toString(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z) -> std::string{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    PositionStrings* positionStrings = PositionStrings::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(LayerUtil::HASHTABLE);
    
stringBuffer->append(StringUtil::getInstance()->toString(hashtable));
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->X_LABEL);
    
stringBuffer->appendint(x);
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->Y_LABEL);
    
stringBuffer->appendint(y);
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->Z_LABEL);
    
stringBuffer->appendint(z);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERUTIL_CPP
