
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DefaultListModel.h"
#include "ListModel.h"

class DefaultListModelHelper
            : public Object
         {
        

    private: defaultListModel: DefaultListModel;

    private: vector: Vector;

public constructor (){

            super();
        this.vector= new Vector();
    
this.defaultListModel= new DefaultListModel();
    
}


    public initDefaultModelList(){
this.defaultListModel= new DefaultListModel();
    

    size: int32_t = this.vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    moduleName: string = this.vector.get(index) as string;;
    
this.defaultListModel!.addElement(moduleName);
    
}

}


    public ListModel getListModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.defaultListModel as ListModel;
    
}


    public add(string string){
this.vector.add(string);
    
}


    public remove(string string){
this.vector.remove(string);
    
}


};

            

