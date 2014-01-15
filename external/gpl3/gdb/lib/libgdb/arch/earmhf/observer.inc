/* This file is automatically generated.  DO NOT EDIT! */
/* Generated from: 	NetBSD: mknative-gdb,v 1.6 2013/10/03 18:58:37 christos Exp  */
/* Generated from: NetBSD: mknative.common,v 1.9 2007/02/05 18:26:01 apb Exp  */

/* GDB Notifications to Observers.

   Copyright (C) 2004-2013 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
  
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

   --

   This file was generated using observer.sh and observer.texi.  */


/* normal_stop notifications.  */

static struct observer_list *normal_stop_subject = NULL;

struct normal_stop_args { struct bpstats *bs; int print_frame; };

static void
observer_normal_stop_notification_stub (const void *data, const void *args_data)
{
  observer_normal_stop_ftype *notify = (observer_normal_stop_ftype *) data;
  const struct normal_stop_args *args = args_data;
  notify (args->bs, args->print_frame);
}

struct observer *
observer_attach_normal_stop (observer_normal_stop_ftype *f)
{
  return generic_observer_attach (&normal_stop_subject,
				  &observer_normal_stop_notification_stub,
				  (void *) f);
}

void
observer_detach_normal_stop (struct observer *observer)
{
  generic_observer_detach (&normal_stop_subject, observer);
}

void
observer_notify_normal_stop (struct bpstats *bs, int print_frame)
{
  struct normal_stop_args args;
  args.bs = bs, args.print_frame = print_frame;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_normal_stop() called\n");
  generic_observer_notify (normal_stop_subject, &args);
}

/* target_changed notifications.  */

static struct observer_list *target_changed_subject = NULL;

struct target_changed_args { struct target_ops *target; };

static void
observer_target_changed_notification_stub (const void *data, const void *args_data)
{
  observer_target_changed_ftype *notify = (observer_target_changed_ftype *) data;
  const struct target_changed_args *args = args_data;
  notify (args->target);
}

struct observer *
observer_attach_target_changed (observer_target_changed_ftype *f)
{
  return generic_observer_attach (&target_changed_subject,
				  &observer_target_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_target_changed (struct observer *observer)
{
  generic_observer_detach (&target_changed_subject, observer);
}

void
observer_notify_target_changed (struct target_ops *target)
{
  struct target_changed_args args;
  args.target = target;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_target_changed() called\n");
  generic_observer_notify (target_changed_subject, &args);
}

/* executable_changed notifications.  */

static struct observer_list *executable_changed_subject = NULL;

static void
observer_executable_changed_notification_stub (const void *data, const void *args_data)
{
  observer_executable_changed_ftype *notify = (observer_executable_changed_ftype *) data;
  notify ();
}

struct observer *
observer_attach_executable_changed (observer_executable_changed_ftype *f)
{
  return generic_observer_attach (&executable_changed_subject,
				  &observer_executable_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_executable_changed (struct observer *observer)
{
  generic_observer_detach (&executable_changed_subject, observer);
}

void
observer_notify_executable_changed (void)
{
char *args = NULL;
  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_executable_changed() called\n");
  generic_observer_notify (executable_changed_subject, &args);
}

/* inferior_created notifications.  */

static struct observer_list *inferior_created_subject = NULL;

struct inferior_created_args { struct target_ops *objfile; int from_tty; };

static void
observer_inferior_created_notification_stub (const void *data, const void *args_data)
{
  observer_inferior_created_ftype *notify = (observer_inferior_created_ftype *) data;
  const struct inferior_created_args *args = args_data;
  notify (args->objfile, args->from_tty);
}

struct observer *
observer_attach_inferior_created (observer_inferior_created_ftype *f)
{
  return generic_observer_attach (&inferior_created_subject,
				  &observer_inferior_created_notification_stub,
				  (void *) f);
}

void
observer_detach_inferior_created (struct observer *observer)
{
  generic_observer_detach (&inferior_created_subject, observer);
}

void
observer_notify_inferior_created (struct target_ops *objfile, int from_tty)
{
  struct inferior_created_args args;
  args.objfile = objfile, args.from_tty = from_tty;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_inferior_created() called\n");
  generic_observer_notify (inferior_created_subject, &args);
}

/* record_changed notifications.  */

static struct observer_list *record_changed_subject = NULL;

struct record_changed_args { struct inferior *inferior; int started; };

static void
observer_record_changed_notification_stub (const void *data, const void *args_data)
{
  observer_record_changed_ftype *notify = (observer_record_changed_ftype *) data;
  const struct record_changed_args *args = args_data;
  notify (args->inferior, args->started);
}

struct observer *
observer_attach_record_changed (observer_record_changed_ftype *f)
{
  return generic_observer_attach (&record_changed_subject,
				  &observer_record_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_record_changed (struct observer *observer)
{
  generic_observer_detach (&record_changed_subject, observer);
}

void
observer_notify_record_changed (struct inferior *inferior, int started)
{
  struct record_changed_args args;
  args.inferior = inferior, args.started = started;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_record_changed() called\n");
  generic_observer_notify (record_changed_subject, &args);
}

/* solib_loaded notifications.  */

static struct observer_list *solib_loaded_subject = NULL;

struct solib_loaded_args { struct so_list *solib; };

static void
observer_solib_loaded_notification_stub (const void *data, const void *args_data)
{
  observer_solib_loaded_ftype *notify = (observer_solib_loaded_ftype *) data;
  const struct solib_loaded_args *args = args_data;
  notify (args->solib);
}

struct observer *
observer_attach_solib_loaded (observer_solib_loaded_ftype *f)
{
  return generic_observer_attach (&solib_loaded_subject,
				  &observer_solib_loaded_notification_stub,
				  (void *) f);
}

void
observer_detach_solib_loaded (struct observer *observer)
{
  generic_observer_detach (&solib_loaded_subject, observer);
}

void
observer_notify_solib_loaded (struct so_list *solib)
{
  struct solib_loaded_args args;
  args.solib = solib;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_solib_loaded() called\n");
  generic_observer_notify (solib_loaded_subject, &args);
}

/* solib_unloaded notifications.  */

static struct observer_list *solib_unloaded_subject = NULL;

struct solib_unloaded_args { struct so_list *solib; };

static void
observer_solib_unloaded_notification_stub (const void *data, const void *args_data)
{
  observer_solib_unloaded_ftype *notify = (observer_solib_unloaded_ftype *) data;
  const struct solib_unloaded_args *args = args_data;
  notify (args->solib);
}

struct observer *
observer_attach_solib_unloaded (observer_solib_unloaded_ftype *f)
{
  return generic_observer_attach (&solib_unloaded_subject,
				  &observer_solib_unloaded_notification_stub,
				  (void *) f);
}

void
observer_detach_solib_unloaded (struct observer *observer)
{
  generic_observer_detach (&solib_unloaded_subject, observer);
}

void
observer_notify_solib_unloaded (struct so_list *solib)
{
  struct solib_unloaded_args args;
  args.solib = solib;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_solib_unloaded() called\n");
  generic_observer_notify (solib_unloaded_subject, &args);
}

/* new_objfile notifications.  */

static struct observer_list *new_objfile_subject = NULL;

struct new_objfile_args { struct objfile *objfile; };

static void
observer_new_objfile_notification_stub (const void *data, const void *args_data)
{
  observer_new_objfile_ftype *notify = (observer_new_objfile_ftype *) data;
  const struct new_objfile_args *args = args_data;
  notify (args->objfile);
}

struct observer *
observer_attach_new_objfile (observer_new_objfile_ftype *f)
{
  return generic_observer_attach (&new_objfile_subject,
				  &observer_new_objfile_notification_stub,
				  (void *) f);
}

void
observer_detach_new_objfile (struct observer *observer)
{
  generic_observer_detach (&new_objfile_subject, observer);
}

void
observer_notify_new_objfile (struct objfile *objfile)
{
  struct new_objfile_args args;
  args.objfile = objfile;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_new_objfile() called\n");
  generic_observer_notify (new_objfile_subject, &args);
}

/* new_thread notifications.  */

static struct observer_list *new_thread_subject = NULL;

struct new_thread_args { struct thread_info *t; };

static void
observer_new_thread_notification_stub (const void *data, const void *args_data)
{
  observer_new_thread_ftype *notify = (observer_new_thread_ftype *) data;
  const struct new_thread_args *args = args_data;
  notify (args->t);
}

struct observer *
observer_attach_new_thread (observer_new_thread_ftype *f)
{
  return generic_observer_attach (&new_thread_subject,
				  &observer_new_thread_notification_stub,
				  (void *) f);
}

void
observer_detach_new_thread (struct observer *observer)
{
  generic_observer_detach (&new_thread_subject, observer);
}

void
observer_notify_new_thread (struct thread_info *t)
{
  struct new_thread_args args;
  args.t = t;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_new_thread() called\n");
  generic_observer_notify (new_thread_subject, &args);
}

/* thread_exit notifications.  */

static struct observer_list *thread_exit_subject = NULL;

struct thread_exit_args { struct thread_info *t; int silent; };

static void
observer_thread_exit_notification_stub (const void *data, const void *args_data)
{
  observer_thread_exit_ftype *notify = (observer_thread_exit_ftype *) data;
  const struct thread_exit_args *args = args_data;
  notify (args->t, args->silent);
}

struct observer *
observer_attach_thread_exit (observer_thread_exit_ftype *f)
{
  return generic_observer_attach (&thread_exit_subject,
				  &observer_thread_exit_notification_stub,
				  (void *) f);
}

void
observer_detach_thread_exit (struct observer *observer)
{
  generic_observer_detach (&thread_exit_subject, observer);
}

void
observer_notify_thread_exit (struct thread_info *t, int silent)
{
  struct thread_exit_args args;
  args.t = t, args.silent = silent;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_thread_exit() called\n");
  generic_observer_notify (thread_exit_subject, &args);
}

/* thread_stop_requested notifications.  */

static struct observer_list *thread_stop_requested_subject = NULL;

struct thread_stop_requested_args { ptid_t ptid; };

static void
observer_thread_stop_requested_notification_stub (const void *data, const void *args_data)
{
  observer_thread_stop_requested_ftype *notify = (observer_thread_stop_requested_ftype *) data;
  const struct thread_stop_requested_args *args = args_data;
  notify (args->ptid);
}

struct observer *
observer_attach_thread_stop_requested (observer_thread_stop_requested_ftype *f)
{
  return generic_observer_attach (&thread_stop_requested_subject,
				  &observer_thread_stop_requested_notification_stub,
				  (void *) f);
}

void
observer_detach_thread_stop_requested (struct observer *observer)
{
  generic_observer_detach (&thread_stop_requested_subject, observer);
}

void
observer_notify_thread_stop_requested (ptid_t ptid)
{
  struct thread_stop_requested_args args;
  args.ptid = ptid;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_thread_stop_requested() called\n");
  generic_observer_notify (thread_stop_requested_subject, &args);
}

/* target_resumed notifications.  */

static struct observer_list *target_resumed_subject = NULL;

struct target_resumed_args { ptid_t ptid; };

static void
observer_target_resumed_notification_stub (const void *data, const void *args_data)
{
  observer_target_resumed_ftype *notify = (observer_target_resumed_ftype *) data;
  const struct target_resumed_args *args = args_data;
  notify (args->ptid);
}

struct observer *
observer_attach_target_resumed (observer_target_resumed_ftype *f)
{
  return generic_observer_attach (&target_resumed_subject,
				  &observer_target_resumed_notification_stub,
				  (void *) f);
}

void
observer_detach_target_resumed (struct observer *observer)
{
  generic_observer_detach (&target_resumed_subject, observer);
}

void
observer_notify_target_resumed (ptid_t ptid)
{
  struct target_resumed_args args;
  args.ptid = ptid;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_target_resumed() called\n");
  generic_observer_notify (target_resumed_subject, &args);
}

/* about_to_proceed notifications.  */

static struct observer_list *about_to_proceed_subject = NULL;

static void
observer_about_to_proceed_notification_stub (const void *data, const void *args_data)
{
  observer_about_to_proceed_ftype *notify = (observer_about_to_proceed_ftype *) data;
  notify ();
}

struct observer *
observer_attach_about_to_proceed (observer_about_to_proceed_ftype *f)
{
  return generic_observer_attach (&about_to_proceed_subject,
				  &observer_about_to_proceed_notification_stub,
				  (void *) f);
}

void
observer_detach_about_to_proceed (struct observer *observer)
{
  generic_observer_detach (&about_to_proceed_subject, observer);
}

void
observer_notify_about_to_proceed (void)
{
char *args = NULL;
  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_about_to_proceed() called\n");
  generic_observer_notify (about_to_proceed_subject, &args);
}

/* breakpoint_created notifications.  */

static struct observer_list *breakpoint_created_subject = NULL;

struct breakpoint_created_args { struct breakpoint *b; };

static void
observer_breakpoint_created_notification_stub (const void *data, const void *args_data)
{
  observer_breakpoint_created_ftype *notify = (observer_breakpoint_created_ftype *) data;
  const struct breakpoint_created_args *args = args_data;
  notify (args->b);
}

struct observer *
observer_attach_breakpoint_created (observer_breakpoint_created_ftype *f)
{
  return generic_observer_attach (&breakpoint_created_subject,
				  &observer_breakpoint_created_notification_stub,
				  (void *) f);
}

void
observer_detach_breakpoint_created (struct observer *observer)
{
  generic_observer_detach (&breakpoint_created_subject, observer);
}

void
observer_notify_breakpoint_created (struct breakpoint *b)
{
  struct breakpoint_created_args args;
  args.b = b;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_breakpoint_created() called\n");
  generic_observer_notify (breakpoint_created_subject, &args);
}

/* breakpoint_deleted notifications.  */

static struct observer_list *breakpoint_deleted_subject = NULL;

struct breakpoint_deleted_args { struct breakpoint *b; };

static void
observer_breakpoint_deleted_notification_stub (const void *data, const void *args_data)
{
  observer_breakpoint_deleted_ftype *notify = (observer_breakpoint_deleted_ftype *) data;
  const struct breakpoint_deleted_args *args = args_data;
  notify (args->b);
}

struct observer *
observer_attach_breakpoint_deleted (observer_breakpoint_deleted_ftype *f)
{
  return generic_observer_attach (&breakpoint_deleted_subject,
				  &observer_breakpoint_deleted_notification_stub,
				  (void *) f);
}

void
observer_detach_breakpoint_deleted (struct observer *observer)
{
  generic_observer_detach (&breakpoint_deleted_subject, observer);
}

void
observer_notify_breakpoint_deleted (struct breakpoint *b)
{
  struct breakpoint_deleted_args args;
  args.b = b;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_breakpoint_deleted() called\n");
  generic_observer_notify (breakpoint_deleted_subject, &args);
}

/* breakpoint_modified notifications.  */

static struct observer_list *breakpoint_modified_subject = NULL;

struct breakpoint_modified_args { struct breakpoint *b; };

static void
observer_breakpoint_modified_notification_stub (const void *data, const void *args_data)
{
  observer_breakpoint_modified_ftype *notify = (observer_breakpoint_modified_ftype *) data;
  const struct breakpoint_modified_args *args = args_data;
  notify (args->b);
}

struct observer *
observer_attach_breakpoint_modified (observer_breakpoint_modified_ftype *f)
{
  return generic_observer_attach (&breakpoint_modified_subject,
				  &observer_breakpoint_modified_notification_stub,
				  (void *) f);
}

void
observer_detach_breakpoint_modified (struct observer *observer)
{
  generic_observer_detach (&breakpoint_modified_subject, observer);
}

void
observer_notify_breakpoint_modified (struct breakpoint *b)
{
  struct breakpoint_modified_args args;
  args.b = b;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_breakpoint_modified() called\n");
  generic_observer_notify (breakpoint_modified_subject, &args);
}

/* traceframe_changed notifications.  */

static struct observer_list *traceframe_changed_subject = NULL;

struct traceframe_changed_args { int tfnum; int tpnum; };

static void
observer_traceframe_changed_notification_stub (const void *data, const void *args_data)
{
  observer_traceframe_changed_ftype *notify = (observer_traceframe_changed_ftype *) data;
  const struct traceframe_changed_args *args = args_data;
  notify (args->tfnum, args->tpnum);
}

struct observer *
observer_attach_traceframe_changed (observer_traceframe_changed_ftype *f)
{
  return generic_observer_attach (&traceframe_changed_subject,
				  &observer_traceframe_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_traceframe_changed (struct observer *observer)
{
  generic_observer_detach (&traceframe_changed_subject, observer);
}

void
observer_notify_traceframe_changed (int tfnum, int tpnum)
{
  struct traceframe_changed_args args;
  args.tfnum = tfnum, args.tpnum = tpnum;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_traceframe_changed() called\n");
  generic_observer_notify (traceframe_changed_subject, &args);
}

/* architecture_changed notifications.  */

static struct observer_list *architecture_changed_subject = NULL;

struct architecture_changed_args { struct gdbarch *newarch; };

static void
observer_architecture_changed_notification_stub (const void *data, const void *args_data)
{
  observer_architecture_changed_ftype *notify = (observer_architecture_changed_ftype *) data;
  const struct architecture_changed_args *args = args_data;
  notify (args->newarch);
}

struct observer *
observer_attach_architecture_changed (observer_architecture_changed_ftype *f)
{
  return generic_observer_attach (&architecture_changed_subject,
				  &observer_architecture_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_architecture_changed (struct observer *observer)
{
  generic_observer_detach (&architecture_changed_subject, observer);
}

void
observer_notify_architecture_changed (struct gdbarch *newarch)
{
  struct architecture_changed_args args;
  args.newarch = newarch;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_architecture_changed() called\n");
  generic_observer_notify (architecture_changed_subject, &args);
}

/* thread_ptid_changed notifications.  */

static struct observer_list *thread_ptid_changed_subject = NULL;

struct thread_ptid_changed_args { ptid_t old_ptid; ptid_t new_ptid; };

static void
observer_thread_ptid_changed_notification_stub (const void *data, const void *args_data)
{
  observer_thread_ptid_changed_ftype *notify = (observer_thread_ptid_changed_ftype *) data;
  const struct thread_ptid_changed_args *args = args_data;
  notify (args->old_ptid, args->new_ptid);
}

struct observer *
observer_attach_thread_ptid_changed (observer_thread_ptid_changed_ftype *f)
{
  return generic_observer_attach (&thread_ptid_changed_subject,
				  &observer_thread_ptid_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_thread_ptid_changed (struct observer *observer)
{
  generic_observer_detach (&thread_ptid_changed_subject, observer);
}

void
observer_notify_thread_ptid_changed (ptid_t old_ptid, ptid_t new_ptid)
{
  struct thread_ptid_changed_args args;
  args.old_ptid = old_ptid, args.new_ptid = new_ptid;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_thread_ptid_changed() called\n");
  generic_observer_notify (thread_ptid_changed_subject, &args);
}

/* inferior_added notifications.  */

static struct observer_list *inferior_added_subject = NULL;

struct inferior_added_args { struct inferior *inf; };

static void
observer_inferior_added_notification_stub (const void *data, const void *args_data)
{
  observer_inferior_added_ftype *notify = (observer_inferior_added_ftype *) data;
  const struct inferior_added_args *args = args_data;
  notify (args->inf);
}

struct observer *
observer_attach_inferior_added (observer_inferior_added_ftype *f)
{
  return generic_observer_attach (&inferior_added_subject,
				  &observer_inferior_added_notification_stub,
				  (void *) f);
}

void
observer_detach_inferior_added (struct observer *observer)
{
  generic_observer_detach (&inferior_added_subject, observer);
}

void
observer_notify_inferior_added (struct inferior *inf)
{
  struct inferior_added_args args;
  args.inf = inf;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_inferior_added() called\n");
  generic_observer_notify (inferior_added_subject, &args);
}

/* inferior_appeared notifications.  */

static struct observer_list *inferior_appeared_subject = NULL;

struct inferior_appeared_args { struct inferior *inf; };

static void
observer_inferior_appeared_notification_stub (const void *data, const void *args_data)
{
  observer_inferior_appeared_ftype *notify = (observer_inferior_appeared_ftype *) data;
  const struct inferior_appeared_args *args = args_data;
  notify (args->inf);
}

struct observer *
observer_attach_inferior_appeared (observer_inferior_appeared_ftype *f)
{
  return generic_observer_attach (&inferior_appeared_subject,
				  &observer_inferior_appeared_notification_stub,
				  (void *) f);
}

void
observer_detach_inferior_appeared (struct observer *observer)
{
  generic_observer_detach (&inferior_appeared_subject, observer);
}

void
observer_notify_inferior_appeared (struct inferior *inf)
{
  struct inferior_appeared_args args;
  args.inf = inf;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_inferior_appeared() called\n");
  generic_observer_notify (inferior_appeared_subject, &args);
}

/* inferior_exit notifications.  */

static struct observer_list *inferior_exit_subject = NULL;

struct inferior_exit_args { struct inferior *inf; };

static void
observer_inferior_exit_notification_stub (const void *data, const void *args_data)
{
  observer_inferior_exit_ftype *notify = (observer_inferior_exit_ftype *) data;
  const struct inferior_exit_args *args = args_data;
  notify (args->inf);
}

struct observer *
observer_attach_inferior_exit (observer_inferior_exit_ftype *f)
{
  return generic_observer_attach (&inferior_exit_subject,
				  &observer_inferior_exit_notification_stub,
				  (void *) f);
}

void
observer_detach_inferior_exit (struct observer *observer)
{
  generic_observer_detach (&inferior_exit_subject, observer);
}

void
observer_notify_inferior_exit (struct inferior *inf)
{
  struct inferior_exit_args args;
  args.inf = inf;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_inferior_exit() called\n");
  generic_observer_notify (inferior_exit_subject, &args);
}

/* inferior_removed notifications.  */

static struct observer_list *inferior_removed_subject = NULL;

struct inferior_removed_args { struct inferior *inf; };

static void
observer_inferior_removed_notification_stub (const void *data, const void *args_data)
{
  observer_inferior_removed_ftype *notify = (observer_inferior_removed_ftype *) data;
  const struct inferior_removed_args *args = args_data;
  notify (args->inf);
}

struct observer *
observer_attach_inferior_removed (observer_inferior_removed_ftype *f)
{
  return generic_observer_attach (&inferior_removed_subject,
				  &observer_inferior_removed_notification_stub,
				  (void *) f);
}

void
observer_detach_inferior_removed (struct observer *observer)
{
  generic_observer_detach (&inferior_removed_subject, observer);
}

void
observer_notify_inferior_removed (struct inferior *inf)
{
  struct inferior_removed_args args;
  args.inf = inf;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_inferior_removed() called\n");
  generic_observer_notify (inferior_removed_subject, &args);
}

/* memory_changed notifications.  */

static struct observer_list *memory_changed_subject = NULL;

struct memory_changed_args { struct inferior *inferior; CORE_ADDR addr; ssize_t len; const bfd_byte *data; };

static void
observer_memory_changed_notification_stub (const void *data, const void *args_data)
{
  observer_memory_changed_ftype *notify = (observer_memory_changed_ftype *) data;
  const struct memory_changed_args *args = args_data;
  notify (args->inferior, args->addr, args->len, args->data);
}

struct observer *
observer_attach_memory_changed (observer_memory_changed_ftype *f)
{
  return generic_observer_attach (&memory_changed_subject,
				  &observer_memory_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_memory_changed (struct observer *observer)
{
  generic_observer_detach (&memory_changed_subject, observer);
}

void
observer_notify_memory_changed (struct inferior *inferior, CORE_ADDR addr, ssize_t len, const bfd_byte *data)
{
  struct memory_changed_args args;
  args.inferior = inferior, args.addr = addr, args.len = len, args.data = data;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_memory_changed() called\n");
  generic_observer_notify (memory_changed_subject, &args);
}

/* before_prompt notifications.  */

static struct observer_list *before_prompt_subject = NULL;

struct before_prompt_args { const char *current_prompt; };

static void
observer_before_prompt_notification_stub (const void *data, const void *args_data)
{
  observer_before_prompt_ftype *notify = (observer_before_prompt_ftype *) data;
  const struct before_prompt_args *args = args_data;
  notify (args->current_prompt);
}

struct observer *
observer_attach_before_prompt (observer_before_prompt_ftype *f)
{
  return generic_observer_attach (&before_prompt_subject,
				  &observer_before_prompt_notification_stub,
				  (void *) f);
}

void
observer_detach_before_prompt (struct observer *observer)
{
  generic_observer_detach (&before_prompt_subject, observer);
}

void
observer_notify_before_prompt (const char *current_prompt)
{
  struct before_prompt_args args;
  args.current_prompt = current_prompt;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_before_prompt() called\n");
  generic_observer_notify (before_prompt_subject, &args);
}

/* gdb_datadir_changed notifications.  */

static struct observer_list *gdb_datadir_changed_subject = NULL;

static void
observer_gdb_datadir_changed_notification_stub (const void *data, const void *args_data)
{
  observer_gdb_datadir_changed_ftype *notify = (observer_gdb_datadir_changed_ftype *) data;
  notify ();
}

struct observer *
observer_attach_gdb_datadir_changed (observer_gdb_datadir_changed_ftype *f)
{
  return generic_observer_attach (&gdb_datadir_changed_subject,
				  &observer_gdb_datadir_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_gdb_datadir_changed (struct observer *observer)
{
  generic_observer_detach (&gdb_datadir_changed_subject, observer);
}

void
observer_notify_gdb_datadir_changed (void)
{
char *args = NULL;
  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_gdb_datadir_changed() called\n");
  generic_observer_notify (gdb_datadir_changed_subject, &args);
}

/* command_param_changed notifications.  */

static struct observer_list *command_param_changed_subject = NULL;

struct command_param_changed_args { const char *param; const char *value; };

static void
observer_command_param_changed_notification_stub (const void *data, const void *args_data)
{
  observer_command_param_changed_ftype *notify = (observer_command_param_changed_ftype *) data;
  const struct command_param_changed_args *args = args_data;
  notify (args->param, args->value);
}

struct observer *
observer_attach_command_param_changed (observer_command_param_changed_ftype *f)
{
  return generic_observer_attach (&command_param_changed_subject,
				  &observer_command_param_changed_notification_stub,
				  (void *) f);
}

void
observer_detach_command_param_changed (struct observer *observer)
{
  generic_observer_detach (&command_param_changed_subject, observer);
}

void
observer_notify_command_param_changed (const char *param, const char *value)
{
  struct command_param_changed_args args;
  args.param = param, args.value = value;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_command_param_changed() called\n");
  generic_observer_notify (command_param_changed_subject, &args);
}

/* tsv_created notifications.  */

static struct observer_list *tsv_created_subject = NULL;

struct tsv_created_args { const struct trace_state_variable *tsv; };

static void
observer_tsv_created_notification_stub (const void *data, const void *args_data)
{
  observer_tsv_created_ftype *notify = (observer_tsv_created_ftype *) data;
  const struct tsv_created_args *args = args_data;
  notify (args->tsv);
}

struct observer *
observer_attach_tsv_created (observer_tsv_created_ftype *f)
{
  return generic_observer_attach (&tsv_created_subject,
				  &observer_tsv_created_notification_stub,
				  (void *) f);
}

void
observer_detach_tsv_created (struct observer *observer)
{
  generic_observer_detach (&tsv_created_subject, observer);
}

void
observer_notify_tsv_created (const struct trace_state_variable *tsv)
{
  struct tsv_created_args args;
  args.tsv = tsv;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_tsv_created() called\n");
  generic_observer_notify (tsv_created_subject, &args);
}

/* tsv_deleted notifications.  */

static struct observer_list *tsv_deleted_subject = NULL;

struct tsv_deleted_args { const struct trace_state_variable *tsv; };

static void
observer_tsv_deleted_notification_stub (const void *data, const void *args_data)
{
  observer_tsv_deleted_ftype *notify = (observer_tsv_deleted_ftype *) data;
  const struct tsv_deleted_args *args = args_data;
  notify (args->tsv);
}

struct observer *
observer_attach_tsv_deleted (observer_tsv_deleted_ftype *f)
{
  return generic_observer_attach (&tsv_deleted_subject,
				  &observer_tsv_deleted_notification_stub,
				  (void *) f);
}

void
observer_detach_tsv_deleted (struct observer *observer)
{
  generic_observer_detach (&tsv_deleted_subject, observer);
}

void
observer_notify_tsv_deleted (const struct trace_state_variable *tsv)
{
  struct tsv_deleted_args args;
  args.tsv = tsv;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_tsv_deleted() called\n");
  generic_observer_notify (tsv_deleted_subject, &args);
}

/* tsv_modified notifications.  */

static struct observer_list *tsv_modified_subject = NULL;

struct tsv_modified_args { const struct trace_state_variable *tsv; };

static void
observer_tsv_modified_notification_stub (const void *data, const void *args_data)
{
  observer_tsv_modified_ftype *notify = (observer_tsv_modified_ftype *) data;
  const struct tsv_modified_args *args = args_data;
  notify (args->tsv);
}

struct observer *
observer_attach_tsv_modified (observer_tsv_modified_ftype *f)
{
  return generic_observer_attach (&tsv_modified_subject,
				  &observer_tsv_modified_notification_stub,
				  (void *) f);
}

void
observer_detach_tsv_modified (struct observer *observer)
{
  generic_observer_detach (&tsv_modified_subject, observer);
}

void
observer_notify_tsv_modified (const struct trace_state_variable *tsv)
{
  struct tsv_modified_args args;
  args.tsv = tsv;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_tsv_modified() called\n");
  generic_observer_notify (tsv_modified_subject, &args);
}

/* test_notification notifications.  */

static struct observer_list *test_notification_subject = NULL;

struct test_notification_args { int somearg; };

static void
observer_test_notification_notification_stub (const void *data, const void *args_data)
{
  observer_test_notification_ftype *notify = (observer_test_notification_ftype *) data;
  const struct test_notification_args *args = args_data;
  notify (args->somearg);
}

struct observer *
observer_attach_test_notification (observer_test_notification_ftype *f)
{
  return generic_observer_attach (&test_notification_subject,
				  &observer_test_notification_notification_stub,
				  (void *) f);
}

void
observer_detach_test_notification (struct observer *observer)
{
  generic_observer_detach (&test_notification_subject, observer);
}

void
observer_notify_test_notification (int somearg)
{
  struct test_notification_args args;
  args.somearg = somearg;

  if (observer_debug)
    fprintf_unfiltered (gdb_stdlog, "observer_notify_test_notification() called\n");
  generic_observer_notify (test_notification_subject, &args);
}