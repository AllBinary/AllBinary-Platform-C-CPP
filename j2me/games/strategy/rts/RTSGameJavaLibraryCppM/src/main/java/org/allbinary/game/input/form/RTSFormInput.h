
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GroupCommonFactory;
class RTSLayer;
class RTSPlayerLayerInterface;
class LayerInterfaceFactoryImageItem;
class ABCustomItem;
class LogUtil;
class DirectionFactory;
class Group;
class AllBinaryGameLayerManager;
class CollidableDestroyableDamageableLayer;
class GPoint;
class ScrollSelectionForm;
class AllBinaryLayerManager;
class LayerInterfaceFactoryInterface;
class StdUtil;
class StringMaker;
class StringUtil;
class GeographicMapCellPosition;
class SimpleGeographicMapCellPositionFactory;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSFormInput
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: GroupCommonFactory* groupCommonFactory;

    private: ABHashtable<Object*, Object*>* hashtable;

    /*protected*/ public: std::vector<CollidableDestroyableDamageableLayer*> newUnconstructedRTSLayerInterfaceArray;

    /*protected*/ public: std::vector<Group*> groupInterfaceArray;

    private: GeographicMapCellPosition* selectedGeographicCellPosition;

    private: bool stickyItemSelected= false;

    private: int32_t selectedStickyItemIndex= 0;

    private: ABCustomItem* selectedStickyItem;

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
            
    /*protected*/ public: ABCustomItem* getItemAt(RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: int32_t getIndexAt(RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: CollidableDestroyableDamageableLayer* getInstance(AllBinaryLayerManager* layerManager, ABCustomItem* aItem, GeographicMapCellPosition* geographicMapCellPosition);

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/GroupCommonFactory.h>)
#include <org/allbinary/game/identification/GroupCommonFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>)
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
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
#if __has_include(<org/allbinary/layer/LayerInterfaceFactoryInterface.h>)
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
