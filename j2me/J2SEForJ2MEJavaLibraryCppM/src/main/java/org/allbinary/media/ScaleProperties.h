
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H
        #define ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScaleProperties
            : public virtual Object
         {

    private: static ScaleProperties* instance_owner();
    public: static ScaleProperties* instance;


            
    public: ScaleProperties();
        
    public: float scaleX= 0.0;

    public: float scaleY= 0.0;

    public: int32_t scaleWidth= 0;

    public: int32_t scaleHeight= 0;

    public: bool shouldScale= false;

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif

        #endif
    
