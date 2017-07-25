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

#include "hyperv_virtual_machine_factory.h"

#include "hyperv_virtual_machine.h"

namespace mp = multipass;

mp::VirtualMachine::UPtr mp::HyperVVirtualMachineFactory::create_virtual_machine(const VirtualMachineDescription& desc,
                                                                                 VMStatusMonitor& monitor)
{
    return std::make_unique<mp::HyperVVirtualMachine>();
}

mp::FetchType mp::HyperVVirtualMachineFactory::fetch_type()
{
    return mp::FetchType::ImageOnly;
}

mp::VMImage mp::HyperVVirtualMachineFactory::prepare(const mp::VMImage& source_image)
{
    return source_image;
}

void mp::HyperVVirtualMachineFactory::configure(YAML::Node& cloud_init_config)
{
}
