
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/vector/Vertex.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Vertex::Vertex() : x(new BasicDecimal(0)), y(new BasicDecimal(0)), z(new BasicDecimal(0)){
}


    auto Vertex::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    PositionStrings* positionStrings = PositionStrings::getInstance();;
    
stringBuffer->append(positionStrings->X_LABEL);
    
stringBuffer->append(this->x->toString());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(positionStrings->Y_LABEL);
    
stringBuffer->append(this->y->toString());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(positionStrings->Z_LABEL);
    
stringBuffer->append(this->z->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_CPP
