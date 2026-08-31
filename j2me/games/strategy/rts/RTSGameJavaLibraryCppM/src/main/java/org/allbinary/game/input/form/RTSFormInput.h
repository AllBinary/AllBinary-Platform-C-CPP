
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSFormInput
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const groupCommonFactory: GroupCommonFactory = GroupCommonFactory.getInstance()!;

    private: const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    const newUnconstructedRTSLayerInterfaceArray: std::vector<CollidableDestroyableDamageableLayer> = new Array(7);

    const groupInterfaceArray: std::vector<Group>;

    private: selectedGeographicCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: stickyItemSelected: bool= false;

    private: selectedStickyItemIndex: int32_t= 0;

    private: selectedStickyItem: ABCustomItem = ABCustomItem.getNullInstance()!;

public constructor (std::vector<Group> groupInterfaceArray);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public processAtPoint(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point);

                //@Throws(Exception.constructor)
            
    public process(AllBinaryLayerManager layerManager);

                //@Throws(Exception.constructor)
            
    public processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index);

                //@Throws(Exception.constructor)
            
    public bool processSticky(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point);

                //@Throws(Exception.constructor)
            
    public processStickyGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index);

                //@Throws(Exception.constructor)
            
    ABCustomItem getItemAt(RTSPlayerLayerInterface rtsPlayerLayerInterface, GPoint point);

                //@Throws(Exception.constructor)
            
    int32_t getIndexAt(RTSPlayerLayerInterface rtsPlayerLayerInterface, GPoint point);

                //@Throws(Exception.constructor)
            
    CollidableDestroyableDamageableLayer getInstance(AllBinaryLayerManager layerManager, ABCustomItem aItem, GeographicMapCellPosition geographicMapCellPosition);

    public GeographicMapCellPosition getSelectedGeographicCellPosition();

    public setSelectedGeographicCellPosition(GeographicMapCellPosition selectedGeographicCellPosition);

    public bool isStickyItemSelected();

    public setStickyItemSelected(bool stickyItemSelected);

    public ABCustomItem getSelectedStickyItem();

    public setSelectedStickyItem(ABCustomItem selectedStickyItem);

    public int32_t getSelectedStickyItemIndex();

    public setSelectedStickyItemIndex(int32_t selectedStickyItemIndex);

    public Hashtable<any, any> getHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_H
