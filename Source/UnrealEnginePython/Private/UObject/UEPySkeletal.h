#pragma once



#include "UnrealEnginePython.h"

PyObject *py_ue_get_anim_instance(ue_PyUObject *, PyObject *);
PyObject *py_ue_set_skeletal_mesh(ue_PyUObject *, PyObject *);

PyObject *py_ue_skeleton_get_parent_index(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeleton_bones_get_num(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeleton_get_bone_name(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeleton_find_bone_index(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeleton_get_ref_bone_pose(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeleton_add_bone(ue_PyUObject *, PyObject *);

PyObject *py_ue_skeletal_mesh_set_soft_vertices(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeletal_mesh_get_soft_vertices(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeletal_mesh_set_skeleton(ue_PyUObject *, PyObject *);

PyObject *py_ue_skeletal_mesh_get_bone_map(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeletal_mesh_set_bone_map(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeletal_mesh_set_active_bone_indices(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeletal_mesh_set_required_bones(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeletal_mesh_get_active_bone_indices(ue_PyUObject *, PyObject *);
PyObject *py_ue_skeletal_mesh_get_required_bones(ue_PyUObject *, PyObject *);