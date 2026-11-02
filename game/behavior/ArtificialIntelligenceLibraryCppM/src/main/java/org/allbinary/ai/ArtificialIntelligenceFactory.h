
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/ai/ArtificialIntelligenceFactoryInterface.h"
class ArtificialIntelligence;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ArtificialIntelligenceFactory
            : public virtual Object
        , public ArtificialIntelligenceFactoryInterface {


            
    public: ArtificialIntelligenceFactory();
        
                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligence* getInstance(Object* anyType);
    public: ArtificialIntelligence* getInstance(const std::string& anyType) { return getInstance(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ArtificialIntelligence* getInstance(BoxValue anyType) { return getInstance(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/ai/ArtificialIntelligenceFactoryInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/ai/ArtificialIntelligence.h")
#include "org/allbinary/ai/ArtificialIntelligence.h"
#endif

        #endif
    
