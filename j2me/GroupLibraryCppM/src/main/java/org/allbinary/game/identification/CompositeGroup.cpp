
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

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Group.h"
#include "GroupCommonFactory.h"

class CompositeGroup
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const groupInterface: Group;

    private: const list: BasicArrayList = new BasicArrayListD();

public constructor (Group groupInterface){

            super();
        this.groupInterface= groupInterface;
    
}


    public clear(){
this.list.clear();
    
}


    public add(Group groupInterface){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    groupCommonFactory: GroupCommonFactory = GroupCommonFactory.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(groupCommonFactory!.ADDING_LABEL);
    
stringBuffer!.append(groupInterface!.toString());
    
stringBuffer!.append(groupCommonFactory!.TO_LABEL);
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.groupInterface));
    
this.logUtil!.putF(stringBuffer!.toString(), this, commonStrings!.ADD);
    
this.list.add(groupInterface);
    
}


    public bool isInGroup(Group groupInterface){

                        if(this.list.contains(groupInterface))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public Group getGroup(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.groupInterface;
    
}


};

            

