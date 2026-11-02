
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
        



        #ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ArtificialIntelligence;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ArtificialIntelligenceFactoryInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual ArtificialIntelligence* getInstance(Object* anyType) = 0;
    public: ArtificialIntelligence* getInstance(const std::string& anyType) { return getInstance(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ArtificialIntelligence* getInstance(BoxValue anyType) { return getInstance(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORYINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/ai/ArtificialIntelligence.h")
#include "org/allbinary/ai/ArtificialIntelligence.h"
#endif

        #endif
    
