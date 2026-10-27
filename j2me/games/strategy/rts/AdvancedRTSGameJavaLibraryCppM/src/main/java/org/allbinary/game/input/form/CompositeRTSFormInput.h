
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_COMPOSITERTSFORMINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_COMPOSITERTSFORMINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class RTSPlayerLayerInterface;
class ABCustomItem;
class CommonStrings;
class Group;
class AllBinaryGameLayerManager;
class CollidableDestroyableDamageableLayer;
class GPoint;
class ScrollSelectionForm;
class AllBinaryLayerManager;
class BasicGeographicMap;
class GeographicMapCompositeInterface;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/RTSFormInput.h"
class WaypointRTSFormInput;
class UnitRTSFormInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompositeRTSFormInput: public RTSFormInput {

    private: std::vector<RTSFormInput*> rtsFormInputArray;

    private: std::vector<int32_t> itemIndex;

    private: bool isPrimaryWaypointCreator;

public: CompositeRTSFormInput(std::vector<Group*> groupInterface, bool isPrimaryWaypointCreator, std::vector<int32_t> itemIndex);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processAtPoint(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);

                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);

                //@Throws(Exception.constructor)
            
    public: bool processSticky(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);

                //@Throws(Exception.constructor)
            
    public: void processStickyGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);

    public: int32_t getSelectedStickyItemIndex();

    public: bool isStickyItemSelected();

    public: void setStickyItemSelected(bool stickyItemSelected);

    public: ABCustomItem* getSelectedStickyItem();

    public: void setSelectedStickyItem(ABCustomItem* selectedStickyItem);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_COMPOSITERTSFORMINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_COMPOSITERTSFORMINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_COMPOSITERTSFORMINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include("org/allbinary/game/input/form/RTSFormInput.h")
#include "org/allbinary/game/input/form/RTSFormInput.h"
#endif
#if __has_include("org/allbinary/game/input/form/WaypointRTSFormInput.h")
#include "org/allbinary/game/input/form/WaypointRTSFormInput.h"
#endif
#if __has_include("org/allbinary/game/input/form/UnitRTSFormInput.h")
#include "org/allbinary/game/input/form/UnitRTSFormInput.h"
#endif

        #endif
    
