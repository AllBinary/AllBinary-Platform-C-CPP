
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_H
        #define ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/identification/GroupInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/event/LayerManagerEvent.h>

      
#include <org/allbinary/layer/event/LayerManagerEventHandler.h>

      
#include <org/allbinary/layer/event/LayerManagerEventListener.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GroupLayerManagerListener: public LayerManagerEventListener {
        

    private: static SINGLETON: GroupLayerManagerListener = new GroupLayerManagerListener();

    public static GroupLayerManagerListener getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor ();

    public clear();

    public int32_t getGroupSizeFromInterface(GroupInterfaceCompositeInterface groupInterfaceCompositeInterface);

    public int32_t getGroupSize(Group groupInterface);

    public BasicArrayList getList(Group groupInterface);

    BasicArrayList getListById(int32_t groupId);

    int32_t getGroupSizeById(int32_t groupId);

    public bool areAllOtherGroupsEmpty(Group groupInterface);

    bool isIdInList(int32_t id, BasicArrayList excludeGroupList);

    public bool areAllOtherGroupsLessThan(BasicArrayList excludeGroupList, int32_t maxSize);

    public init(int32_t total);

    public onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public onCreateLayerManagerEvent(LayerManagerEvent layerManagerEvent);

                //@Throws(Exception.constructor)
            
    public onDeleteLayerManagerEvent(LayerManagerEvent layerManagerEvent);

    public log();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_H
