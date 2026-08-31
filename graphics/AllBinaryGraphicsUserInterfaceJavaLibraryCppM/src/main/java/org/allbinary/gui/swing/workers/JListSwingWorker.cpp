
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
        



#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SwingWorker.h"
#include "JList.h"
#include "ListModel.h"

class JListSwingWorker: public SwingWorker {
        

    private: jList: JList;

    private: listModel: ListModel;

public constructor (JList jList, ListModel listModel){

            super();
        this.setJList(jList);
    
this.setListModel(listModel);
    
}


    public any doInBackground(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    done(){
this.getJList()!.setModel(this.getListModel());
    
}


    JList getJList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.jList;
    
}


    setJList(JList jList){
this.jList= jList;
    
}


    ListModel getListModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.listModel;
    
}


    setListModel(ListModel listModel){
this.listModel= listModel;
    
}


};

            

