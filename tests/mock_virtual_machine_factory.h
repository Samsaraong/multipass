/*
 * Copyright (C) 2017 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Alberto Aguirre <alberto.aguirre@canonical.com>
 *
 */

#ifndef MULTIPASS_MOCK_VIRTUAL_MACHINE_FACTORY_H
#define MULTIPASS_MOCK_VIRTUAL_MACHINE_FACTORY_H

#include <multipass/virtual_machine_description.h>
#include <multipass/virtual_machine_factory.h>
#include <multipass/vm_status_monitor.h>

#include <gmock/gmock.h>

struct MockVirtualMachineFactory : public multipass::VirtualMachineFactory
{
    MOCK_METHOD2(create_virtual_machine, multipass::VirtualMachine::UPtr(const multipass::VirtualMachineDescription&,
                                                                         multipass::VMStatusMonitor&));

    MOCK_METHOD0(fetch_type, multipass::FetchType());
    MOCK_METHOD1(prepare, multipass::VMImage(const multipass::VMImage&));
    MOCK_METHOD1(configure, void(YAML::Node&));
};
#endif // MULTIPASS_MOCK_VIRTUAL_MACHINE_FACTORY_H
