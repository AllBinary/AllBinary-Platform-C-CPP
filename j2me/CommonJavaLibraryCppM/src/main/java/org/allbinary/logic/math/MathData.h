
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H
        #define ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MathData
            : public Object
         {

    private: static const MathData instance = new MathData();

    public: static MathData getInstance();

    public: const std::string EQUALS;

    public: const std::string PLUS = "+";

    public: const std::string GREATER_THAN = ">";

    public: const std::string MINUS;

    public: const std::string DIVIDE;

    public: const std::string MULTIPLY;

private: MathData();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H
