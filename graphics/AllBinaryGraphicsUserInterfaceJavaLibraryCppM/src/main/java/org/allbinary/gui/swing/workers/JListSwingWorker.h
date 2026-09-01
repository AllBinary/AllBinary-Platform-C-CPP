
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
        



        #ifndef ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H
        #define ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H

#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SwingWorker.h"
#include "JList.h"
#include "ListModel.h"

class JListSwingWorker: public SwingWorker {

    private: JList jList;

    private: ListModel listModel;

public: JListSwingWorker(JList jList, ListModel listModel);

    public: Object* doInBackground();

    protected: void done();

    private: JList getJList();

    private: void setJList(JList jList);

    private: ListModel getListModel();

    private: void setListModel(ListModel listModel);

};

            


        #endif //ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H
