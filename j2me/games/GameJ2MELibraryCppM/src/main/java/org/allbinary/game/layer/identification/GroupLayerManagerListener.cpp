
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
        

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
        
auto GroupLayerManagerListener::SINGLETON_owner() -> GroupLayerManagerListener* { static std::unique_ptr<GroupLayerManagerListener> value(new GroupLayerManagerListener()); return value.get(); }
GroupLayerManagerListener* GroupLayerManagerListener::SINGLETON = GroupLayerManagerListener::SINGLETON_owner();

    auto GroupLayerManagerListener::getInstance() -> GroupLayerManagerListener*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GroupLayerManagerListener::SINGLETON;
    
}


GroupLayerManagerListener::GroupLayerManagerListener() : logUtil(LogUtil::getInstance()), list(new BasicArrayListD()){
LayerManagerEventHandler::getInstance()->addListener(this);
    
}


    auto GroupLayerManagerListener::clear() -> void{

    BasicArrayList* groupList;;
    

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
groupList= dynamic_cast<BasicArrayList*>(this->list->objectArray[index]);
    
groupList->clear();
    
}

}


    auto GroupLayerManagerListener::getGroupSizeFromInterface(GroupInterfaceCompositeInterface* groupInterfaceCompositeInterface) -> int32_t{

    std::vector<Group*> groupInterfaceArray = groupInterfaceCompositeInterface->getGroupInterface();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getGroupSize(groupInterfaceArray[0]);;
    
}


    auto GroupLayerManagerListener::getGroupSize(Group* groupInterface) -> int32_t{

    int32_t id = static_cast<int32_t>(groupInterface->getGroupId());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getGroupSizeById(id);;
    
}


    auto GroupLayerManagerListener::getList(Group* groupInterface) -> BasicArrayList*{

    int32_t id = static_cast<int32_t>(groupInterface->getGroupId());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getListById(id);;
    
}


    auto GroupLayerManagerListener::getListById(int32_t groupId) -> BasicArrayList*{

    BasicArrayList* groupList = dynamic_cast<BasicArrayList*>(this->list->objectArray[groupId]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return groupList;
    
}


    auto GroupLayerManagerListener::getGroupSizeById(int32_t groupId) -> int32_t{

    BasicArrayList* groupList = dynamic_cast<BasicArrayList*>(this->list->objectArray[groupId]);;
    

    int32_t size = groupList->size();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return size;
    
}


    auto GroupLayerManagerListener::areAllOtherGroupsEmpty(Group* groupInterface) -> bool{

    int32_t id = static_cast<int32_t>(groupInterface->getGroupId());;
    

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {

                        if(id != index)
                        
                                    {
                                    
    int32_t groupSize = this->getGroupSizeById(index);;
    

                        if(groupSize != 0)
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Group Size: ")->appendint(groupSize)->toString(), this, "areAllOtherGroupsEmpty");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto GroupLayerManagerListener::isIdInList(int32_t id, BasicArrayList* excludeGroupList) -> bool{

    int32_t size = excludeGroupList->size();;
    

    std::vector<Group*> groupInterfaceArray;;
    

    Group* groupInterface;;
    

    int32_t groupId= 0;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
groupInterfaceArray= JavaBoxes::unbox<std::vector<Group*>>(excludeGroupList->objectArray[index]);
    

    int32_t size2 = groupInterfaceArray.size();;
    




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {
groupInterface= groupInterfaceArray[index2];
    
groupId= static_cast<int32_t>(groupInterface->getGroupId());
    

                        if(groupId == id)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto GroupLayerManagerListener::areAllOtherGroupsLessThan(BasicArrayList* excludeGroupList, int32_t maxSize) -> bool{

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {

                        if(!this->isIdInList(index, excludeGroupList))
                        
                                    {
                                    
    int32_t groupSize = this->getGroupSizeById(index);;
    

                        if(groupSize >= maxSize)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto GroupLayerManagerListener::init(int32_t total) -> void{

        while(this->list->size() <= total +1)
        {
this->list->add(new BasicArrayListD());
    
}

}


    auto GroupLayerManagerListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto GroupLayerManagerListener::onCreateLayerManagerEvent(LayerManagerEvent* layerManagerEvent) -> void{

    AllBinaryLayer* layerInterface = layerManagerEvent->getLayerInterface();;
    

    std::vector<Group*> groupInterfaceArray = layerInterface->getGroupInterface();;
    

    int32_t size = groupInterfaceArray.size();;
    

    int32_t id= 0;;
    

    BasicArrayList* groupList;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
id= static_cast<int32_t>(groupInterfaceArray[index]->getGroupId());
    
groupList= dynamic_cast<BasicArrayList*>(this->list->objectArray[id]);
    

                        if(groupList == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("id: ")->appendint(id)->toString(), this, "onCreateLayerManagerEvent");
    

                                    }
                                

                        if(!groupList->contains(layerInterface))
                        
                                    {
                                    groupList->add(layerInterface);
    

                                    }
                                
                        else {
                            
                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    auto GroupLayerManagerListener::onDeleteLayerManagerEvent(LayerManagerEvent* layerManagerEvent) -> void{

    AllBinaryLayer* layerInterface = layerManagerEvent->getLayerInterface();;
    

    std::vector<Group*> groupInterfaceArray = layerInterface->getGroupInterface();;
    

    int32_t size = groupInterfaceArray.size();;
    

    int32_t id= 0;;
    

    BasicArrayList* groupList;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
id= static_cast<int32_t>(groupInterfaceArray[index]->getGroupId());
    
groupList= dynamic_cast<BasicArrayList*>(this->list->objectArray[id]);
    
groupList->remove(layerInterface);
    
}

}


    auto GroupLayerManagerListener::log() -> void{

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string GROUP = "Group: ";;
    

    std::string SPACE = CommonSeps::getInstance()->SPACE;;
    

    std::string TOTAL_LABEL = CommonLabels::getInstance()->TOTAL_LABEL;;
    

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {

    BasicArrayList* groupList = dynamic_cast<BasicArrayList*>(this->list->objectArray[index]);;
    
stringBuffer->append(GROUP);
    
stringBuffer->appendint(index);
    
stringBuffer->append(SPACE);
    
stringBuffer->append(TOTAL_LABEL);
    
stringBuffer->appendint(groupList->size());
    
stringBuffer->append(SPACE);
    
}

this->logUtil->putF(stringBuffer->toString(), this, "log");
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_CPP
