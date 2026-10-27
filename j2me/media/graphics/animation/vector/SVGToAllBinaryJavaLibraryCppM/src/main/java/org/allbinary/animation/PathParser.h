
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_PATHPARSER_H
        #define ORG_ALLBINARY_ANIMATION_PATHPARSER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Double.h"
        
class BasicArrayList;
class BasicArrayListD;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StringBuffer;
class FixedPoint;
class PGUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathParser
            : public virtual Object
         {

    private: static std::vector<std::string> tokenize(std::string d);

    public: static int32_t parsePath(std::string d, std::vector<int32_t> outX, std::vector<int32_t> outY, int32_t maxPoints);

    private: static bool isCommand(std::string tok);


            
    public: PathParser();
        
};

            


        #endif //ORG_ALLBINARY_ANIMATION_PATHPARSER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_PATHPARSER_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_PATHPARSER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include("org/allbinary/animation/StringBuffer.h")
#include "org/allbinary/animation/StringBuffer.h"
#endif
#if __has_include("org/allbinary/animation/FixedPoint.h")
#include "org/allbinary/animation/FixedPoint.h"
#endif
#if __has_include("org/allbinary/animation/PGUtil.h")
#include "org/allbinary/animation/PGUtil.h"
#endif

        #endif
    
