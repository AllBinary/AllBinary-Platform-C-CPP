
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GeographicMapCellPosition;
class SimpleGeographicMapCellPositionFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPathHistoryInfo
            : public virtual Object
         {


            
    public: GeographicMapCellPathHistoryInfo();
        
    private: GeographicMapCellPosition* previousGeographicMapCellPosition;

    private: GeographicMapCellPosition* previousOnPathGeographicMapCellPosition;

    private: GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition;

    private: GeographicMapCellPosition* nextOnPathGeographicMapCellPosition;

    private: GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition;

    public: GeographicMapCellPosition* getPreviousGeographicMapCellPosition();

    public: void setPreviousGeographicMapCellPosition(GeographicMapCellPosition* previousGeographicMapCellPosition);

    public: GeographicMapCellPosition* getPreviousOnPathGeographicMapCellPosition();

    public: void setPreviousOnPathGeographicMapCellPosition(GeographicMapCellPosition* previousOnPathGeographicMapCellPosition);

    public: GeographicMapCellPosition* getNextUnvisitedOnPathGeographicMapCellPosition();

    public: void setNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition);

    public: GeographicMapCellPosition* getNextOnPathGeographicMapCellPosition();

    public: void setNextOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextOnPathGeographicMapCellPosition);

    public: GeographicMapCellPosition* getNextChosenOnPathGeographicMapCellPosition();

    public: void setNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif

        #endif
    
