
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

    private: JList jList;

    private: ListModel listModel;

public: JListSwingWorker(JList jList, ListModel listModel){
this->setJList(jList);
    
this->setListModel(listModel);
    
}


    public: Object* doInBackground(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    protected: void done(){
this->getJList().setModel(this->getListModel());
    
}


    private: JList getJList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jList;
    
}


    private: void setJList(JList jList){
this->jList= jList;
    
}


    private: ListModel getListModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->listModel;
    
}


    private: void setListModel(ListModel listModel){
this->listModel= listModel;
    
}


};

            

