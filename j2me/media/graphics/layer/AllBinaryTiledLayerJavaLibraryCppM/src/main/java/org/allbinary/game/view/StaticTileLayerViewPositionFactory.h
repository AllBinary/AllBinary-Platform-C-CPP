
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
        



        #ifndef ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_H
        #define ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ViewPositionBase;
#include <org/allbinary/view/ViewPositionFactoryInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StaticTileLayerIntoPositionViewPosition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StaticTileLayerViewPositionFactory
            : public virtual Object
        , public virtual ViewPositionFactoryInterface {


            
    public: StaticTileLayerViewPositionFactory();
        
                //@Throws(Exception.constructor)
            
    public: ViewPositionBase* getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionFactoryInterface.h>)
#include <org/allbinary/view/ViewPositionFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/view/StaticTileLayerIntoPositionViewPosition.h")
#include "org/allbinary/game/view/StaticTileLayerIntoPositionViewPosition.h"
#endif

        #endif
    
