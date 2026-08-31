
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
        

    private: jList: JList;

    private: listModel: ListModel;

public constructor (JList jList, ListModel listModel);

    public any doInBackground();

    done();

    JList getJList();

    setJList(JList jList);

    ListModel getListModel();

    setListModel(ListModel listModel);

};

            


        #endif //ORG_ALLBINARY_GUI_SWING_WORKERS_JLISTSWINGWORKER_H
