
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MathData
            : public Object
         {

    private: static MathData* instance() { static std::unique_ptr<MathData> value(new MathData()); return value.get(); }

    public: static MathData* getInstance();

    public: std::string EQUALS;

    public: const std::string PLUS = "+";

    public: const std::string GREATER_THAN = ">";

    public: std::string MINUS;

    public: std::string DIVIDE;

    public: std::string MULTIPLY;

private: MathData();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H
