/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/messages/msg_passing.h>

void bind_messages_msg_passing(py::module& m)
{


    m.def("send",
          (pmt::pmt_t(*)(
              gr::messages::msg_accepter_sptr, pmt::pmt_t const&, pmt::pmt_t const&)) &
              gr::messages::send,
          py::arg("accepter"),
          py::arg("which_port"),
          py::arg("msg"));
    m.def("send",
          (pmt::pmt_t(*)(
              gr::messages::msg_accepter*, pmt::pmt_t const&, pmt::pmt_t const&)) &
              gr::messages::send,
          py::arg("accepter"),
          py::arg("which_port"),
          py::arg("msg"));
    m.def("send",
          (pmt::pmt_t(*)(
              gr::messages::msg_accepter&, pmt::pmt_t const&, pmt::pmt_t const&)) &
              gr::messages::send,
          py::arg("accepter"),
          py::arg("which_port"),
          py::arg("msg"));
    m.def("send",
          (pmt::pmt_t(*)(pmt::pmt_t, pmt::pmt_t const&, pmt::pmt_t const&)) &
              gr::messages::send,
          py::arg("accepter"),
          py::arg("which_port"),
          py::arg("msg"));
}