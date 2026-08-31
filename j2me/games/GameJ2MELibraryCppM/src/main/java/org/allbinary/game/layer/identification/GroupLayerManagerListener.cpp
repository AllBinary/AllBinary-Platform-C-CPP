
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

    public static GroupLayerManagerListener getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GroupLayerManagerListener.SINGLETON;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        LayerManagerEventHandler.getInstance()!.addListener(this);
    
}


    public clear(){

    groupList: BasicArrayList;;
    

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {
groupList= this.list.objectArray[index]! as BasicArrayList;
    
groupList!.clear();
    
}

}


    public int32_t getGroupSizeFromInterface(GroupInterfaceCompositeInterface groupInterfaceCompositeInterface){

    groupInterfaceArray: std::vector<Group> = groupInterfaceCompositeInterface!.getGroupInterface()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getGroupSize(groupInterfaceArray[0]!);;
    
}


    public int32_t getGroupSize(Group groupInterface){

    id: int32_t = static_cast<int32_t>(groupInterface!.getGroupId());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getGroupSizeById(id);;
    
}


    public BasicArrayList getList(Group groupInterface){

    id: int32_t = static_cast<int32_t>(groupInterface!.getGroupId());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getListById(id);;
    
}


    BasicArrayList getListById(int32_t groupId){

    groupList: BasicArrayList = this.list.objectArray[groupId]! as BasicArrayList;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return groupList;
    
}


    int32_t getGroupSizeById(int32_t groupId){

    groupList: BasicArrayList = this.list.objectArray[groupId]! as BasicArrayList;;
    

    size: int32_t = groupList!.size()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return size;
    
}


    public bool areAllOtherGroupsEmpty(Group groupInterface){

    id: int32_t = static_cast<int32_t>(groupInterface!.getGroupId());;
    

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {

                        if(id != index)
                        
                                    {
                                    
    groupSize: int32_t = this.getGroupSizeById(index)!;;
    

                        if(groupSize != 0)
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("Group Size: ")!.appendint(groupSize)!.toString(), this, "areAllOtherGroupsEmpty");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    bool isIdInList(int32_t id, BasicArrayList excludeGroupList){

    size: int32_t = excludeGroupList!.size()!;;
    

    groupInterfaceArray: std::vector<Group>;;
    

    groupInterface: Group;;
    

    groupId: int32_t= 0;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {
groupInterfaceArray= excludeGroupList!.objectArray[index]! as Group[];
    

    size2: int32_t = groupInterfaceArray!.length
                ;;
    




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {
groupInterface= groupInterfaceArray[index2]!;
    
groupId= static_cast<int32_t>(groupInterface!.getGroupId());
    

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


    public bool areAllOtherGroupsLessThan(BasicArrayList excludeGroupList, int32_t maxSize){

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {

                        if(!this.isIdInList(index, excludeGroupList))
                        
                                    {
                                    
    groupSize: int32_t = this.getGroupSizeById(index)!;;
    

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


    public init(int32_t total){

        while(this.list.size() <= total +1)
        {
this.list.add(new BasicArrayListD());
    
}

}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public onCreateLayerManagerEvent(LayerManagerEvent layerManagerEvent){

    layerInterface: AllBinaryLayer = layerManagerEvent!.getLayerInterface()!;;
    

    groupInterfaceArray: std::vector<Group> = layerInterface!.getGroupInterface()!;;
    

    size: int32_t = groupInterfaceArray!.length
                ;;
    

    id: int32_t= 0;;
    

    groupList: BasicArrayList;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
id= static_cast<int32_t>(groupInterfaceArray[index]!.getGroupId());
    
groupList= this.list.objectArray[id]! as BasicArrayList;
    

                        if(groupList == 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("id: ")!.appendint(id)!.toString(), this, "onCreateLayerManagerEvent");
    

                                    }
                                

                        if(!groupList!.contains(layerInterface))
                        
                                    {
                                    groupList!.add(layerInterface);
    

                                    }
                                
                        else {
                            
                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    public onDeleteLayerManagerEvent(LayerManagerEvent layerManagerEvent){

    layerInterface: AllBinaryLayer = layerManagerEvent!.getLayerInterface()!;;
    

    groupInterfaceArray: std::vector<Group> = layerInterface!.getGroupInterface()!;;
    

    size: int32_t = groupInterfaceArray!.length
                ;;
    

    id: int32_t= 0;;
    

    groupList: BasicArrayList;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
id= static_cast<int32_t>(groupInterfaceArray[index]!.getGroupId());
    
groupList= this.list.objectArray[id]! as BasicArrayList;
    
groupList!.remove(layerInterface);
    
}

}


    public log(){

    stringBuffer: StringMaker = new StringMaker();;
    

    GROUP: string = "Group: ";;
    

    SPACE: string = CommonSeps.getInstance()!.SPACE;;
    

    TOTAL_LABEL: string = CommonLabels.getInstance()!.TOTAL_LABEL;;
    

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {

    groupList: BasicArrayList = this.list.objectArray[index]! as BasicArrayList;;
    
stringBuffer!.append(GROUP);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(SPACE);
    
stringBuffer!.append(TOTAL_LABEL);
    
stringBuffer!.appendint(groupList!.size());
    
stringBuffer!.append(SPACE);
    
}

this.logUtil!.putF(stringBuffer!.toString(), this, "log");
    
}


};

            

