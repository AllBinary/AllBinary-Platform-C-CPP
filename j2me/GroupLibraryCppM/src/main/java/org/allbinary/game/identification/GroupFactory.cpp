
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Group.h"

class GroupFactory
            : public Object
         {
        

    private: static instance: GroupFactory = new GroupFactory();

    public static GroupFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GroupFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const NULL_GROUP_ARRAY: std::vector<Group> = [];

    private: const list: BasicArrayList = new BasicArrayListD();

    private: index: int32_t = 0;

    public Group getNextGroup(){

    group: Group = this.list.objectArray[this.index]! as Group;;
    
this.index++;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return group;
    
}


    public Group getNextGroupByName(string name){

    group: Group = this.getNextGroup()!;;
    
group.setName(name);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return group;
    
}


    public init(int16_t groups, std::vector<string> nameArray){

    stringMaker: StringMaker = new StringMaker();;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    TEAM: string = "Team ";;
    
this.list.clear();
    
this.index= 0;
    

    size: int32_t = this.list.size()!;;
    

        while(size < groups)
        {

    name: string = stringUtil!.EMPTY_STRING;;
    

                        if(size < nameArray!.length)
                        
                                    {
                                    name= nameArray[size]!;
    

                                    }
                                
                        else {
                            stringMaker!.delete(0, stringMaker!.length());
    
name= stringMaker!.append(TEAM)!.appendint(size)!.toString();
    

                        }
                            
this.list.add(new Group(name, (size +3)));
    
size++;
    
}

}


};

            

