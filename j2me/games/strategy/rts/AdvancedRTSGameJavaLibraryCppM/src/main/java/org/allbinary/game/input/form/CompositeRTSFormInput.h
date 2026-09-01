
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

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSFormInput.h"
#include "WaypointRTSFormInput.h"
#include "UnitRTSFormInput.h"

class CompositeRTSFormInput: public RTSFormInput {

    private: std::vector<RTSFormInput> rtsFormInputArray;

    private: std::vector<int32_t> itemIndex;

    private: bool isPrimaryWaypointCreator;

public: CompositeRTSFormInput(std::vector<Group> groupInterface, bool isPrimaryWaypointCreator, std::vector<int32_t> itemIndex);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processAtPoint(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point);

                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index);

                //@Throws(Exception.constructor)
            
    public: bool processSticky(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point);

                //@Throws(Exception.constructor)
            
    public: void processStickyGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index);

    public: int32_t getSelectedStickyItemIndex();

    public: bool isStickyItemSelected();

    public: void setStickyItemSelected(bool stickyItemSelected);

    public: ABCustomItem getSelectedStickyItem();

    public: void setSelectedStickyItem(ABCustomItem selectedStickyItem);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_COMPOSITERTSFORMINPUT_H
