
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

    private: static GroupLayerManagerListener* SINGLETON() { static std::unique_ptr<GroupLayerManagerListener> value(new GroupLayerManagerListener()); return value.get(); }

    public: static GroupLayerManagerListener* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayList* list = new BasicArrayListD();

private: GroupLayerManagerListener();

    public: void clear();

    public: int32_t getGroupSizeFromInterface(GroupInterfaceCompositeInterface* groupInterfaceCompositeInterface);

    public: int32_t getGroupSize(Group* groupInterface);

    public: BasicArrayList* getList(Group* groupInterface);

    private: BasicArrayList* getListById(int32_t groupId);

    private: int32_t getGroupSizeById(int32_t groupId);

    public: bool areAllOtherGroupsEmpty(Group* groupInterface);

    private: bool isIdInList(int32_t id, BasicArrayList* excludeGroupList);

    public: bool areAllOtherGroupsLessThan(BasicArrayList* excludeGroupList, int32_t maxSize);

    public: void init(int32_t total);

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onCreateLayerManagerEvent(LayerManagerEvent* layerManagerEvent);

                //@Throws(Exception.constructor)
            
    public: void onDeleteLayerManagerEvent(LayerManagerEvent* layerManagerEvent);

    public: void log();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_H
