
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
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

    private: static GroupFactory instance = GroupFactory();

    public: static GroupFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GroupFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const std::vector<Group> NULL_GROUP_ARRAY = {};

    private: const BasicArrayList list = BasicArrayListD();

    private: int32_t index = 0;

    public: Group getNextGroup(){

    Group group = this->list.objectArray[this->index];;
    
this->index++;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return group;
    
}


    public: Group getNextGroupByName(std::string name){

    Group group = this->getNextGroup();;
    
group.setName(name);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return group;
    
}


    public: void init(int16_t groups, std::vector<std::string> nameArray){

    StringMaker stringMaker = StringMaker();;
    

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string TEAM = "Team ";;
    
this->list.clear();
    
this->index= 0;
    

    int32_t size = this->list.size();;
    

        while(size < groups)
        {

    std::string name = stringUtil.EMPTY_STRING;;
    

                        if(size < nameArray.size())
                        
                                    {
                                    name= nameArray[size];
    

                                    }
                                
                        else {
                            stringMaker.delete(0, stringMaker.length());
    
name= stringMaker.append(TEAM).appendint(size).toString();
    

                        }
                            
this->list.add(Group(name, (size +3)));
    
size++;
    
}

}


};

            

