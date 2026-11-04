
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2006 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Comparable.h"
        
            #include "java/lang/Exception.h"
        
class StringMaker;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PathFindingNodeCostInfoData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingNodeCostInfo
            : public virtual Object
        , public virtual Comparable<PathFindingNodeCostInfo*> {

    private: PathFindingNodeCostInfoData* pathFindingNodeCostInfoData;

    public: int64_t costFromStartP;

    public: int64_t costToEndP;

    public: int64_t totalCostP= 0;

public: PathFindingNodeCostInfo(int64_t costFromStart, int64_t costToGoal);

    public: void setCostToEnd(int64_t costToEnd);

    public: void setTotalCost(int64_t totalCost);

                //@Throws(Exception.constructor)
            
    public: void setCalculatedTotalCost();

    public: void setCostFromStart(int64_t cost);

    public: void addCostFromStart(int64_t cost);

    public: int32_t compareTo(PathFindingNodeCostInfo* pathFindingNodeCostInfo);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGNODECOSTINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h"
#endif

        #endif
    
