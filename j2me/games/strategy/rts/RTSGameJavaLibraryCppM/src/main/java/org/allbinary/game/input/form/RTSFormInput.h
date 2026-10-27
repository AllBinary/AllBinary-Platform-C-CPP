
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSFormInput
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: GroupCommonFactory* groupCommonFactory = GroupCommonFactory::getInstance();

    private: ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();

    protected: const std::vector<CollidableDestroyableDamageableLayer*> newUnconstructedRTSLayerInterfaceArray = std::vector<CollidableDestroyableDamageableLayer*>(7);

    protected: std::vector<Group*> groupInterfaceArray;

    private: GeographicMapCellPosition* selectedGeographicCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: bool stickyItemSelected= false;

    private: int32_t selectedStickyItemIndex= 0;

    private: ABCustomItem* selectedStickyItem = ABCustomItem::getNullInstance();

public: RTSFormInput(std::vector<Group*> groupInterfaceArray);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processAtPoint(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* layerManager);

                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);

                //@Throws(Exception.constructor)
            
    public: bool processSticky(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point);

                //@Throws(Exception.constructor)
            
    public: void processStickyGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index);

                //@Throws(Exception.constructor)
            
    protected: ABCustomItem* getItemAt(RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point);

                //@Throws(Exception.constructor)
            
    protected: int32_t getIndexAt(RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point);

                //@Throws(Exception.constructor)
            
    protected: CollidableDestroyableDamageableLayer* getInstance(AllBinaryLayerManager* layerManager, ABCustomItem* aItem, GeographicMapCellPosition* geographicMapCellPosition);

    public: GeographicMapCellPosition* getSelectedGeographicCellPosition();

    public: void setSelectedGeographicCellPosition(GeographicMapCellPosition* selectedGeographicCellPosition);

    public: bool isStickyItemSelected();

    public: void setStickyItemSelected(bool stickyItemSelected);

    public: ABCustomItem* getSelectedStickyItem();

    public: void setSelectedStickyItem(ABCustomItem* selectedStickyItem);

    public: int32_t getSelectedStickyItemIndex();

    public: void setSelectedStickyItemIndex(int32_t selectedStickyItemIndex);

    public: ABHashtable<Object*, Object*>* getHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_H
