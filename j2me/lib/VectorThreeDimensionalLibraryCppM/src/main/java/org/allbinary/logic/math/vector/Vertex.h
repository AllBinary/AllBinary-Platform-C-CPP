
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_H
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Vertex
            : public Object
         {

    public: BasicDecimal x = BasicDecimal(0);

    public: BasicDecimal y = BasicDecimal(0);

    public: BasicDecimal z = BasicDecimal(0);

public: Vertex();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_H
