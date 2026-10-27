
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_PATHPARSER_H
        #define ORG_ALLBINARY_ANIMATION_PATHPARSER_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Double.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/StringBuffer.h"
#include "org/allbinary/animation/FixedPoint.h"
#include "org/allbinary/animation/PGUtil.h"

class PathParser
            : public Object
         {

    private: static std::vector<std::string> tokenize(std::string d);

    public: static int32_t parsePath(std::string d, std::vector<int32_t> outX, std::vector<int32_t> outY, int32_t maxPoints);

    private: static bool isCommand(std::string tok);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_PATHPARSER_H
